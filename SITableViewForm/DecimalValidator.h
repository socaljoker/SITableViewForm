//
//  DecimalValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Validator.h"

@interface DecimalValidator : Validator

@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;

@end
