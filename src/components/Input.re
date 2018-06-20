open BsReactNative;

type state = string;

let initialState = () => "";

let reducer = (newText, _text) => ReasonReact.Update(newText);

let component = ReasonReact.reducerComponent("Input");

let make = (~submitTodo, _children) => {
  ...component,
  initialState,
  reducer,
  render: self => {
    let text = self.state;

    let handleSubmit = () => {
      submitTodo(text);
      self.send("");
    };

    <View>
      <TextInput
        value=text
        placeholder="Add a Todo"
        onChangeText=(text => self.send(text))
      />
      <Button title="Add Todo" onPress=handleSubmit />
    </View>;
  },
};