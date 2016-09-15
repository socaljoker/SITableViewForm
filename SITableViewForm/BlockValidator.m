//
//  BlockValidator.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "BlockValidator.h"

@implementation BlockValidator

-(NSError *)validate:(id)value {
    return self.validationBlock(value);
}

@end
