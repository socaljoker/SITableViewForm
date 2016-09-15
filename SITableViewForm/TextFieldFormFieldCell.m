//
//  TextFieldFormFieldCell.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "TextFieldFormFieldCell.h"

@implementation TextFieldFormFieldCell

-(instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:UITableViewCellStyleDefault reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        
        UITextField *textField = [UITextField new];
        textField.text = @"Test";
        [self.contentView addSubview:textField];
        
        [textField setTranslatesAutoresizingMaskIntoConstraints:NO];
        
        NSDictionary *views = NSDictionaryOfVariableBindings(textField);
        NSArray *constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|-20-[textField]-5-|"
                                                                       options: NSLayoutFormatAlignAllCenterX
                                                                       metrics:nil
                                                                         views:views];
        [self.contentView addConstraints:constraints];
        constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|-5-[textField]-5-|"
                                                              options: NSLayoutFormatAlignAllCenterX
                                                              metrics:nil
                                                                views:views];
        [self.contentView addConstraints:constraints];
    }
    return self;
}

@end
