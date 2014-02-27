//
//  CoreDataManager.h
//  WidgetPush
//
//  Created by Marin on 9/1/11.
//  Copyright (c) 2011 mneorr.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataManager : NSObject

@property (readonly, nonatomic) NSArray*  managedObjectContexts;

@property (readonly, nonatomic) NSManagedObjectContext *defaultManagedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *defaultManagedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *defaultPersistentStoreCoordinator;

@property (copy, nonatomic) NSString *databaseName;
@property (copy, nonatomic) NSString *modelName;

+ (id)instance DEPRECATED_ATTRIBUTE;
+ (instancetype)sharedManager;

- (BOOL)addContext:(NSManagedObjectContext*)context;
- (BOOL)removeContext:(NSManagedObjectContext*)context;

- (BOOL)saveContext DEPRECATED_ATTRIBUTE;
- (BOOL)saveContext:(NSManagedObjectContext*)context;
- (void)save;

- (void)useInMemoryStore DEPRECATED_ATTRIBUTE;
- (void)setInMemoryStoreAsDefault;

#pragma mark - Helpers

- (NSURL *)applicationDocumentsDirectory;
- (NSURL *)applicationSupportDirectory;

@end
