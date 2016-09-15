//
//  IntegerValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Validator.h"

@interface IntegerValidator : Validator

@property (nonatomic) int maxValue;
@property (nonatomic) int minValue;

@end
