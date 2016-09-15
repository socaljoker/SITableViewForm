//
//  RegexValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Validator.h"

typedef enum : NSUInteger {
    RegexMatchCountTypeEquals,
    RegexMatchCountTypeLessThan,
    RegexMatchCountTypeGreaterThan,
} RegexMatchCountType;

@interface RegexValidator : Validator

@property (strong, nonatomic, nonnull) NSRegularExpression *regex;
@property (nonatomic) int requiredMatchCount;
@property (nonatomic) RegexMatchCountType matchCountType;

@end
