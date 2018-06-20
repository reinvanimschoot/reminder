open BsReactNative.Style;

type sanFransiscoWeights =
  | Thin
  | Ultralight
  | Light
  | Regular
  | Medium
  | Semibold
  | Bold
  | Heavy
  | Black;

let sanFransiscoWeights = sanFransiscoWeight =>
  switch (sanFransiscoWeight) {
  | Thin =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_100),
    ])
  | Ultralight =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_200),
    ])
  | Light =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_300),
    ])
  | Regular =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_400),
    ])
  | Medium =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_500),
    ])
  | Semibold =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_600),
    ])
  | Bold =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_700),
    ])
  | Heavy =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_800),
    ])
  | Black =>
    style([
      fontFamily("System"),
      backgroundColor(String("transparent")),
      fontWeight(`_900),
    ])
  };