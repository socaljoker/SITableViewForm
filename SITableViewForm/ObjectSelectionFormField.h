//
//  ObjectSelectionFormField.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormField.h"

@interface ObjectSelectionFormField : FormField

@property (strong, nonatomic, nullable) NSObject *currentValue;
@property (nonatomic, copy, nullable) void (^updateBlock)(NSObject * _Nullable value);

@end
