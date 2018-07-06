//
//  GeneralSettingsSlider.m
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import "GeneralSettingsSlider.h"

@implementation GeneralSettingsSlider

- (CGRect) trackRectForBounds:(CGRect)bounds {
    return CGRectMake(bounds.origin.x, bounds.origin.y, bounds.size.width, 5);
}

@end
