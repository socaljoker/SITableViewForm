//
//  RegexValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "RegexValidator.h"

@implementation RegexValidator

-(instancetype)init {
    self = [super init];
    if (self) {
        self.requiredMatchCount = 1;
        self.matchCountType = RegexMatchCountTypeEquals;
    }
    
    return self;
}

-(NSError *)validate:(id)value {
    if ([value isKindOfClass:[NSString class]]) {
        NSString *stringValue = (NSString *)value;
        
        NSUInteger matchCount = [self.regex numberOfMatchesInString:stringValue options:NSMatchingAnchored range:NSMakeRange(0, stringValue.length)];
        
        if (self.matchCountType == RegexMatchCountTypeEquals) {
            if (matchCount != self.requiredMatchCount) {
                return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorValueNotEqual userInfo:@{NSLocalizedDescriptionKey:@"The value does not match the required format."}];
            }
        }
        else if (self.matchCountType == RegexMatchCountTypeLessThan) {
            if (matchCount > self.requiredMatchCount) {
                return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorValueNotEqual userInfo:@{NSLocalizedDescriptionKey:@"The value does not match the required format."}];
            }
        }
        else if (self.matchCountType == RegexMatchCountTypeGreaterThan) {
            if (matchCount < self.requiredMatchCount) {
                return [NSError errorWithDomain:NSValidatorErrorDomain code:NSValidationErrorValueNotEqual userInfo:@{NSLocalizedDescriptionKey:@"The value does not match the required format."}];
            }
        }
        
        return nil;
    }
    else {
        assert(@"Attempting to validate non-string value with RegexValidator!");
        return nil;
    }
}

@end
