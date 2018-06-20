open BsReactNative;
open SharedTypes;
open Utils;

type state = {todos: list(todo)};

type action =
  | AddTodo(string)
  | ToggleTodo(int)
  | DeleteTodo(int);

let id = ref(0);

let newTodo = text => {
  id := id^ + 1;
  {id: id^, text, completed: false};
};

let reducer = (action, {todos}) =>
  switch (action) {
  | AddTodo(text) => ReasonReact.Update({todos: [newTodo(text), ...todos]})
  | ToggleTodo(id) =>
    let todos =
      List.map(
        todo =>
          todo.id === id ? {...todo, completed: ! todo.completed} : todo,
        todos,
      );
    ReasonReact.Update({todos: todos});
  | DeleteTodo(id) =>
    let todos = List.filter(todo => todo.id !== id, todos);
    ReasonReact.Update({todos: todos});
  };

let component = ReasonReact.reducerComponent("TodoList");

let initialState = () => {todos: []};

let make = _children => {
  ...component,
  initialState,
  reducer,
  render: self => {
    let {todos} = self.state;
    let numItems = List.length(todos);

    <View style=Styles.container>
      <Text style=Styles.title> (toStr("ReMinder")) </Text>
      <Text style=Styles.text>
        (toStr(string_of_int(numItems) ++ " items to remember!"))
      </Text>
      <Input submitTodo=(text => self.send(AddTodo(text))) />
      (
        List.map(
          todo =>
            <TodoItem
              onToggle=(() => self.send(ToggleTodo(todo.id)))
              deleteTodo=(() => self.send(DeleteTodo(todo.id)))
              key=(string_of_int(todo.id))
              todo
            />,
          todos,
        )
        |> Array.of_list
        |> ReasonReact.array
      )
    </View>;
  },
};