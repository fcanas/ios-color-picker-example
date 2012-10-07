# Usage of the ColorPickerViewController in your own project

1. 
	Add the following files into your project
	ColorPickerViewController.xib
	UI Parts/
		bar_select.png
		colormap.png
		crosshair.png
	Classes/
		ColorPickerViewController.h
		ColorPickerViewController.m
		ColorPickerView.h
		ColorPickerView.m
		Constants.h
		GradientView.h
		GradientView.m
		UIColor-Expanded.h
		UIColor-Expanded.m
		UIColor-HSVAdditions.h
		UIColor-HSVAdditions.m
		ColorSwatchView.m
		ColorSwatchView.h

2. 
  Now you can use the ColorPickerViewController
  See the file StandinViewController.m for example usage


# Configuration

It is possible to store and recall the set color value automatically.
This behavior is controlled by the define `IPHONE_COLOR_PICKER_SAVE_DEFAULT`

	#ifdef IPHONE_COLOR_PICKER_SAVE_DEFAULT

- The color is stored in the app defaults and recalled on next program start
- Identifier key is: `defaultsKey`

	\#undef IPHONE_COLOR_PICKER_SAVE_DEFAULT
  
- The initial color must be assigned after object construction
- No app defaults are accessed
- Member Variable is: defaultsColor
