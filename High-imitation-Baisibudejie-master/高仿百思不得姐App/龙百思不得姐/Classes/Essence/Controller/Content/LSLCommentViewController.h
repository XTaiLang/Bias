//
//  LSLCommentViewController.h
//  龙百思不得姐
//
//  Created by lisilong on 15/9/17.
//  Copyright (c) 2015年 longshao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LSLTopic;

@interface LSLCommentViewController : UIViewController
/** 数据模型 */
@property(nonatomic,strong)LSLTopic *topic;
@end
