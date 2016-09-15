//
//  ArrayValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "ArrayValidator.h"

@implementation ArrayValidator

-(instancetype)init {
    self = [super init];
    if (self) {
        self.minCount = INT_MIN;
        self.maxCount = INT_MAX;
    }
    return self;
}

-(NSError *)validate:(id)value {
    if ([value isKindOfClass:[NSArray class]]) {
        NSArray *arrayValue = (NSArray *)value;
        NSUInteger arrayCount = arrayValue.count;
        
        if (arrayCount > self.maxCount) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMaxValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The count is larger than the allowed value of %i.", self.maxCount]}];
        }
        
        if (arrayCount < self.minCount) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMinValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The count is smaller than the allowed value of %i.", self.minCount]}];
        }
        
        return nil;
    }
    else {
        assert(@"Attempting to validate non-array value with ArrayValidator!");
        return nil;
    }
}

@end
