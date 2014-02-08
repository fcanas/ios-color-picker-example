//
//  FCViewController.h
//  Color Picker
//
//  Created by Fabian Canas on 10/13/12.
//  Copyright (c) 2012 Fabian Canas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FCColorPickerViewController.h>

@interface FCViewController : UIViewController <FCColorPickerViewControllerDelegate>

-(IBAction)chooseColor:(id)sender;

@end
