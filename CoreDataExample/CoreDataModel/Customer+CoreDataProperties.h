//
//  Customer+CoreDataProperties.h
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Customer.h"

NS_ASSUME_NONNULL_BEGIN

@interface Customer (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *info;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Order *> *order;

@end

@interface Customer (CoreDataGeneratedAccessors)

- (void)addOrderObject:(Order *)value;
- (void)removeOrderObject:(Order *)value;
- (void)addOrder:(NSSet<Order *> *)values;
- (void)removeOrder:(NSSet<Order *> *)values;

@end

NS_ASSUME_NONNULL_END
