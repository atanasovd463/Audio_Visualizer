//
//  Equalizer.m
//  Equalizers
//
//  Copyright © 2017 Agilie. All rights reserved.
//

#import "Equalizer.h"

@implementation Equalizer

+ (instancetype) createWithType : (DPEqualizerType) type name : (NSString*) name {
    
    Equalizer *equalizer = [[Equalizer alloc] init];
               equalizer.type = type;
               equalizer.name = name;
    
    return equalizer;
}

@end
