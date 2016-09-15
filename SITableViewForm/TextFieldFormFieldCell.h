//
//  TextFieldFormFieldCell.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "FormFieldTableViewCell.h"

#define TextFieldFormFieldIdentifier @"TEXTFIELDFORMFIELD"

@interface TextFieldFormFieldCell : FormFieldTableViewCell

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *subtitleLabel;
@property (strong, nonatomic) IBOutlet UITextField *textField;

@end
