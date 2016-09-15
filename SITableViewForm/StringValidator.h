//
//  StringValidator.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Validator.h"

@interface StringValidator : Validator

@property (nonatomic) int minLength;
@property (nonatomic) int maxLength;
@property (nonatomic) NSMutableArray<NSString *> *restrictedChars;

@end
