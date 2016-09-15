//
//  Form.h
//  SITableViewForm
//
//  Created by Shawn Irvin on 9/14/16.
//  Copyright © 2016 Shawn Irvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FormField.h"

@interface Form : NSObject

@property (strong, nonatomic, nonnull) NSArray *groups;

-(FormField * _Nullable)formFieldAtIndexPath:(NSIndexPath * _Nonnull)indexPath;

@end
