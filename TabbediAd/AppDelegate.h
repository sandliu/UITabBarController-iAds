//
//  AppDelegate.h
//  TabbediAd
//
//  Created by Vashishtha Jogi on 1/2/12.
//  Copyright (c) 2012 Vashishtha Jogi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UITabBarController+iAd.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
