//
//  ArrayValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Validator.h"

@interface ArrayValidator : Validator

@property (nonatomic) int minCount;
@property (nonatomic) int maxCount;

@end
