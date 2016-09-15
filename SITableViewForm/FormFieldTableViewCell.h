//
//  FormFieldTableViewCell.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FormField.h"

@interface FormFieldTableViewCell : UITableViewCell

@property (strong, nonatomic, nonnull) FormField *field;

@end
