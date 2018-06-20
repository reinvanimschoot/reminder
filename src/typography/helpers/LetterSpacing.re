open BsReactNative.Style;
open BsReactNative.Platform;

let spacing = (spacing: int) : t =>
  os() === Android ?
    style([]) :
    style([letterSpacing(SanFransiscoSpacing.sanFranciscoSpacing(spacing))]);