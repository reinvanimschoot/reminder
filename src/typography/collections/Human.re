/*
 Human Interface Guidelines

 Defined at https://developer.apple.com/ios/human-interface-guidelines/visual-design/typography/

 Defines size, weight and color

 */

open BsReactNative.Style;

open Hue;

type stylesHuman = {
  largeTitle: t,
  title1: t,
  title2: t,
  title3: t,
  headline: t,
  body: t,
  callout: t,
  subhead: t,
  footnote: t,
  caption1: t,
  caption2: t,
};

let createStyleWithHue = hueType => {
  largeTitle:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(34),
      style([
        fontSize(Float(34.)),
        lineHeight(41.),
        color(String(hue(hueType))),
      ]),
    |]),
  title1:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(28),
      style([
        fontSize(Float(28.)),
        lineHeight(34.),
        color(String(hue(hueType))),
      ]),
    |]),
  title2:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(22),
      style([
        fontSize(Float(22.)),
        lineHeight(28.),
        color(String(hue(hueType))),
      ]),
    |]),
  title3:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(20),
      style([
        fontSize(Float(20.)),
        lineHeight(25.),
        color(String(hue(hueType))),
      ]),
    |]),
  headline:
    flatten([|
      SystemWeights.systemweights(Semibold),
      LetterSpacing.spacing(17),
      style([
        fontSize(Float(17.)),
        lineHeight(22.),
        color(String(hue(hueType))),
      ]),
    |]),
  body:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(17),
      style([
        fontSize(Float(17.)),
        lineHeight(22.),
        color(String(hue(hueType))),
      ]),
    |]),
  callout:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(16),
      style([
        fontSize(Float(16.)),
        lineHeight(21.),
        color(String(hue(hueType))),
      ]),
    |]),
  subhead:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(15),
      style([
        fontSize(Float(15.)),
        lineHeight(20.),
        color(String(hue(hueType))),
      ]),
    |]),
  footnote:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(15),
      style([
        fontSize(Float(13.)),
        lineHeight(18.),
        color(String(hue(hueType))),
      ]),
    |]),
  caption1:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(12),
      style([
        fontSize(Float(12.)),
        lineHeight(16.),
        color(String(hue(hueType))),
      ]),
    |]),
  caption2:
    flatten([|
      SystemWeights.systemweights(Regular),
      LetterSpacing.spacing(11),
      style([
        fontSize(Float(11.)),
        lineHeight(13.),
        color(String(hue(hueType))),
      ]),
    |]),
};