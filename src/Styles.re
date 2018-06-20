open BsReactNative.Style;
open Typography;

let container =
  style([
    flex(1.),
    alignItems(Center),
    backgroundColor(String("white")),
    padding(Pt(40.)),
  ]);

let title =
  flatten([|
    style([
      color(String("green")),
      fontSize(Float(66.)),
      fontWeight(`Normal),
    ]),
    style([
      color(String("#414548")),
      fontSize(Float(24.)),
      fontWeight(`Bold),
    ]),
  |]);

let text = humanDark.caption2;