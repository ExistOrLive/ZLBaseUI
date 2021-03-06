//
//  ZLBaseNavigationController.h
//  StewardGather
//
//  Created by 朱猛 on 2018/10/9.
//  Copyright © 2018年 朱猛. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLBaseNavigationController : UINavigationController

@property(nonatomic, strong, readonly) UIPanGestureRecognizer* zlInteractivePopGestureRecognizer;

@property(nonatomic, assign) BOOL forbidGestureBack;

@end
