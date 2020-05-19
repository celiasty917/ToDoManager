//
//  MyUIViewController.h
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPHandlesMOC.h"
#import "DPHandlesToDoEntity.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyUIViewController : UIViewController <DPHandlesMOC, DPHandlesToDoEntity>

-(void) receiveMOC:(NSManagedObjectContext *)incomingMOC;
-(void) receiveToDoEntity:(ToDoEntity *)incomingToDoEntity;

@end

NS_ASSUME_NONNULL_END
