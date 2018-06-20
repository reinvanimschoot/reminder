open BsReactNative.Style;
open BsReactNative.Platform;

type systemWeights =
  | Thin
  | Light
  | Regular
  | Semibold
  | Bold;

let systemweights = systemWeight =>
  switch (systemWeight) {
  | Thin =>
    os() === Android ?
      RobotoWeights.robotoWeights(Thin) :
      SanFransiscoWeights.sanFransiscoWeights(Thin)
  | Light =>
    os() === Android ?
      RobotoWeights.robotoWeights(Light) :
      SanFransiscoWeights.sanFransiscoWeights(Light)
  | Regular =>
    os() === Android ?
      RobotoWeights.robotoWeights(Regular) :
      SanFransiscoWeights.sanFransiscoWeights(Regular)
  | Semibold =>
    os() === Android ?
      RobotoWeights.robotoWeights(Medium) :
      SanFransiscoWeights.sanFransiscoWeights(Semibold)
  | Bold =>
    os() === Android ?
      RobotoWeights.robotoWeights(Bold) :
      SanFransiscoWeights.sanFransiscoWeights(Bold)
  };