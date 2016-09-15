//
//  Validator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NSValidatorErrorDomain @"NSValidatorErrorDomain"

typedef enum : NSUInteger {
    NSValidationErrorBeyondMaxValue,
    NSValidationErrorBeyondMinValue,
    NSValidationErrorValueNotEqual,
    NSValidationErrorContainsRestrictedCharacters,
    NSValidationErrorInvalidFormat,
    NSValidationErrorEmptyValue
} NSValidationError;

@interface Validator : NSObject

-(NSError * _Nullable)validate:(id _Nonnull)value;

@end
