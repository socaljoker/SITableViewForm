//
//  BlockValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Validator.h"
#import "FormField.h"

@interface BlockValidator : Validator

@property (nonatomic, copy, nonnull) NSError* _Nullable (^validationBlock)(id _Nonnull value);

@end
