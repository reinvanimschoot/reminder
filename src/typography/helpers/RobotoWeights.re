open BsReactNative.Style;

type robotoWeights =
  | Thin
  | Light
  | Regular
  | Medium
  | Bold
  | Condensed
  | CondensedBold;

let robotoWeights = robotoWeight =>
  switch (robotoWeight) {
  | Thin =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Normal),
      fontFamily("sans-serif-thin"),
    ])
  | Light =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Normal),
      fontFamily("sans-serif-light"),
    ])
  | Regular =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Normal),
      fontFamily("sans-serif"),
    ])
  | Medium =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Normal),
      fontFamily("sans-serif-medium"),
    ])
  | Bold =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Bold),
      fontFamily("sans-serif"),
    ])
  | Condensed =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Normal),
      fontFamily("sans-serif-condensed"),
    ])
  | CondensedBold =>
    style([
      includeFontPadding(false),
      backgroundColor(String("transparent")),
      fontWeight(`Bold),
      fontFamily("sans-serif-condensed"),
    ])
  };