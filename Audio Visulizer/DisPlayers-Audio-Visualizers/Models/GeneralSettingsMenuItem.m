//
//  GeneralSettingsMenuItem.m
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import "GeneralSettingsMenuItem.h"

@implementation GeneralSettingsMenuItem

+ (instancetype) createWithSetiings : (DPEqualizerSettings*) settings type : (GeneralSettingsMenuItemType) type cellId : (NSString*) cellId {
    GeneralSettingsMenuItem *item = [[GeneralSettingsMenuItem alloc] init];
    
    item.settings = settings;
    item.type = type;
    item.cellId = cellId;
    
    return item;

}


@end
