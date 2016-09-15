//
//  DecimalValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "DecimalValidator.h"

@implementation DecimalValidator

-(instancetype)init {
    self = [super init];
    if (self) {
        self.minValue = FLT_MIN;
        self.maxValue = FLT_MAX;
    }
    return self;
}

-(NSError *)validate:(id)value {
    if ([value isKindOfClass:[NSNumber class]]) {
        NSNumber *numberValue = (NSNumber *)value;
        float intValue = [numberValue floatValue];
        
        if (intValue > self.maxValue) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMaxValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The value is larger than the allowed value of %f.", self.maxValue]}];
        }
        
        if (intValue < self.minValue) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMinValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The value is smaller than the allowed value of %f.", self.minValue]}];
        }
        
        return nil;
    }
    else {
        assert(@"Attempting to validate non-number value with IntegerValidator!");
        return nil;
    }
}

@end
