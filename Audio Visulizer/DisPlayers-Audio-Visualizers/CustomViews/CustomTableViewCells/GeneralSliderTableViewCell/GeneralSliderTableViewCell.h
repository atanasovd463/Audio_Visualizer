//
//  GeneralSliderTableViewCell.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import "MainTableViewCell.h"

@class GeneralSliderTableViewCell;

@protocol GeneralSliderTableViewCellDelegate <NSObject>

- (void) generalSliderTableViewCell : (GeneralSliderTableViewCell*) generalSliderTableViewCell propertyValueChanged : (CGFloat) newValue;

@end

@interface GeneralSliderTableViewCell : MainTableViewCell

@end
