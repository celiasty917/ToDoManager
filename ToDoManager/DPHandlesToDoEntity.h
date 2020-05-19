//
//  DPHandlesToDoEntity.h
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ToDoEntity+CoreDataClass.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DPHandlesToDoEntity <NSObject>

- (void) receiveToDoEntity: (ToDoEntity *) incomingToDoEntity;

@end

NS_ASSUME_NONNULL_END
