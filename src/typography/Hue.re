type hueType =
  | Dark
  | Light;

let hue = hueType =>
  switch (hueType) {
  | Dark => "black"
  | Light => "white"
  };