//
//  MainTableViewCell.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainTableViewCell : UITableViewCell

@property (nonatomic, weak) id delegate;

+ (NSString*) cellID;
+ (CGFloat) heightForCell;

+ (instancetype) cell;
+ (id) cellNib;

- (void) configurationForObject:(id)object;

@end
