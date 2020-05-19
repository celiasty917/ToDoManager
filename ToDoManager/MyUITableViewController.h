//
//  MyUITableViewController.h
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPHandlesMOC.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyUITableViewController : UITableViewController <DPHandlesMOC>

-(void) receiveMOC:(NSManagedObjectContext *)incomingMOC;

@end

NS_ASSUME_NONNULL_END
