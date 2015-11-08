//
//  EventInfoTableViewCellActionProtocol.h
//  Conferences
//
//  Created by Karpushin Artem on 08/11/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EventInfoTableViewCellActionProtocol <NSObject>

- (void)didTapSignUpButton:(UIButton *)button;
- (void)didTapSaveToCalendarButton:(UIButton *)button;
- (void)didTapReadMoreEventDescriptionButton:(UIButton *)button;

@end
