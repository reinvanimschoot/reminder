open BsReactNative;
open SharedTypes;
open Utils;

let component = ReasonReact.statelessComponent("TodoItem");

let make = (~todo, ~onToggle, ~deleteTodo, _children) => {
  ...component,
  render: _self =>
    <View>
      <Switch value=todo.completed onValueChange=(_evt => onToggle()) />
      <Text> (toStr(todo.text)) </Text>
      <Button title="Delete" onPress=(_evt => deleteTodo()) />
    </View>,
};