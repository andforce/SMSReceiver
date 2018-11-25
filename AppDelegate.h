//
//  AppDelegate.h
//  SMSReceiver
//
//  Created by 迪远 王 on 2018/11/25.
//  Copyright © 2018 andforce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

