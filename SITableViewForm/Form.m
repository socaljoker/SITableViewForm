//
//  Form.m
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import "Form.h"
#import "FormFieldGroup.h"

@implementation Form

@synthesize groups;

-(void)addGroup:(FormFieldGroup *)group {
    
}

-(void)insertGroup:(FormFieldGroup *)group atIndex:(NSUInteger *)index {
    
}

-(void)insertGroups:(NSArray *)array atIndexes:(NSIndexSet *)indexes {
    
}

-(FormField *)formFieldAtIndexPath:(NSIndexPath *)indexPath {
    return [[self.groups objectAtIndex:indexPath.section] objectAtIndex:indexPath.row];
}

@end
