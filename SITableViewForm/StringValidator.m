//
//  StringValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "StringValidator.h"

@implementation StringValidator

-(instancetype)init {
    self = [super init];
    if (self) {
        self.minLength = INT_MIN;
        self.maxLength = INT_MAX;
        self.restrictedChars = [NSMutableArray<NSString *> new];
    }
    return self;
}

-(NSError *)validate:(id)value {
    if ([value isKindOfClass:[NSString class]]) {
        NSString *stringValue = (NSString *)value;
        
        if (stringValue.length > self.maxLength) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMaxValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The value is longer than the allowed length of %i characters.", self.maxLength]}];
        }
        
        if (stringValue.length < self.minLength) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMinValue userInfo:@{NSLocalizedDescriptionKey:[NSString stringWithFormat:@"The value is shorter than the allowed length of %i characters.", self.maxLength]}];
        }
        
        BOOL containsRestrictedChar = NO;
        
        for (NSString *charcter in self.restrictedChars) {
            if ([stringValue containsString:charcter]) {
                containsRestrictedChar = YES;
                break;
            }
        }
        
        if (containsRestrictedChar) {
            return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorBeyondMaxValue userInfo:@{NSLocalizedDescriptionKey:@"The value contains one or more restricted characters"}];
        }
        
        return nil;
    }
    else {
        assert(@"Attempting to validate non-string value with StringValidator!");
        return nil;
    }
}

@end
