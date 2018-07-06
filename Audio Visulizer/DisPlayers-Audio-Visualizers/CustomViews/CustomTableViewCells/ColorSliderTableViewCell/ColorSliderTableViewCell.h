//
//  ColorSliderTableViewCell.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import "MainTableViewCell.h"

@class ColorSliderTableViewCell;

@protocol ColorSliderTableViewCellDelegate <NSObject>

- (void) colorSliderTableViewCell : (ColorSliderTableViewCell*) colorSliderTableViewCell colorDidChange : (UIColor*) newColor;

- (void) colorSliderTableViewCell : (ColorSliderTableViewCell*) colorSliderTableViewCell needToAddNewColor : (BOOL) needToAddNewColor;

@end

@interface ColorSliderTableViewCell : MainTableViewCell

@end
