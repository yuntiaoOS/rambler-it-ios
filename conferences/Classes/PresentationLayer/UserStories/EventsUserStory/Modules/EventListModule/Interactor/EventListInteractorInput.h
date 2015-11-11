//
//  EventListInteractorInput.h
//  Conferences
//
//  Created by Karpushin Artem on 12/10/15.
//  Copyright 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EventListInteractorInput <NSObject>

- (void)updateEventList;
- (NSArray *)obtainEventList;

@end

