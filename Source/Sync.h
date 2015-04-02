@import CoreData;

@class DATAStack;

static NSString * const SyncCustomPrimaryKey = @"hyper.isPrimaryKey";
static NSString * const SyncCustomRemoteKey = @"hyper.remoteKey";

@interface Sync : NSObject

+ (void)changes:(NSArray *)changes
   inEntityName:(NSString *)entityName
      dataStack:(DATAStack *)dataStack
     completion:(void (^)(NSError *error))completion;

+ (void)changes:(NSArray *)changes
   inEntityName:(NSString *)entityName
      predicate:(NSPredicate *)predicate
      dataStack:(DATAStack *)dataStack
     completion:(void (^)(NSError *error))completion;

+ (void)changes:(NSArray *)changes
   inEntityName:(NSString *)entityName
         parent:(NSManagedObject *)parent
      dataStack:(DATAStack *)dataStack
     completion:(void (^)(NSError *error))completion;

@end
