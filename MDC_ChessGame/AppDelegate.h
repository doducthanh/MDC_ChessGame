//
//  AppDelegate.h
//  MDC_ChessGame
//
//  Created by Duc Thanh on 16/03/2017.
//  Copyright © 2017 Duc Thanh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

