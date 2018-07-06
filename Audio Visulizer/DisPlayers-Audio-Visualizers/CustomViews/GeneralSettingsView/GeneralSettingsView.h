//
//  GeneralSettingsView.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DPEqualizerSettings.h"

#import "AppConstants.h"

@class GeneralSettingsView;

@protocol GeneralSettingsViewDelegate <NSObject>

- (void) updateSettings : (GeneralSettingsMenuItemType) type newValue : (CGFloat) newValue ;

- (void) closeGeneralSettingsView : (GeneralSettingsView*) generalSettingsView;

@end


@interface GeneralSettingsView : UIView

@property (nonatomic, weak) id<GeneralSettingsViewDelegate> delegate;

+ (instancetype) createWithSettings : (DPEqualizerSettings*) settings;

- (void) showWihDuration : (CGFloat) duration;

- (void) closeWithDuration : (CGFloat) duration
                completion : (void (^)(BOOL finished)) completion;

@end
