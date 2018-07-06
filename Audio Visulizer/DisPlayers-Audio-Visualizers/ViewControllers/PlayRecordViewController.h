//
//  PlayRecordViewController.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EZAudio.h"
#import "AppConstants.h"
#import "DPConstants.h"

@interface PlayRecordViewController : UIViewController

- (void) configureWithEqualizerType : (DPEqualizerType) type;

@end
