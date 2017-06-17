//
//  Mediator+NewsDetail.h
//  NewsDetail_Category
//
//  Created by Yuns on 2017/6/17.
//  Copyright © 2017年 Yuns. All rights reserved.
//

#import <Mediator/Mediator.h>

NSString * const kMediatorParamsNewsIDKey = @"newsIDKey";

@interface Mediator (NewsDetail)

- (UIViewController *)NewsDetail_viewControllerWithNewsID:(NSString *)newsID;

@end
