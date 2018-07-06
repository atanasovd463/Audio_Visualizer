//
//  Equalizer.h
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppConstants.h"
#import "DPConstants.h"

@interface Equalizer : NSObject

@property (nonatomic, assign) DPEqualizerType type;
@property (nonatomic, assign) NSString *name;

+ (instancetype) createWithType : (DPEqualizerType) type
                           name : (NSString*) name;

@end
