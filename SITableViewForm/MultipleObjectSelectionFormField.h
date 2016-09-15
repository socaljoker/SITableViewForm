//
//  MultipleObjectSelectionFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface MultipleObjectSelectionFormField : FormField

@property (strong, nonatomic, nullable) NSArray *currentValue;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSArray * _Nullable value);

@end
