//
//  TextFieldFormFieldCell.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "TextFieldFormFieldCell.h"

@implementation TextFieldFormFieldCell

-(instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        
        self.titleLabel.text = self.field.title;
        self.subtitleLabel.text = self.field.subtitle;
    }
    return self;
}

-(void)setField:(FormField *)field {
    [super setField:field];
    self.titleLabel.text = self.field.title;
    self.subtitleLabel.text = self.field.subtitle;
}

@end
